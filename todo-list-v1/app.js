const express = require("express")
const bodyParser = require("body-parser")
const mongoose = require("mongoose")
const _ = require("lodash");
const app = express()

app.set('view engine', 'ejs');
app.use(bodyParser.urlencoded({extended: true}));
app.use(express.static("public")); 

mongoose.connect("mongodb+srv://swayamg20:Swayam%402002@clusternote.uepir.mongodb.net/myFirstDatabase?retryWrites=true&w=majority", {useNewUrlParser: true, useUnifiedTopology: true})

const itemSchema = {
    name: String
};
const listSchema = {
    name: String,
    items: [itemSchema]
};

const Item = mongoose.model("Item", itemSchema);
const List = mongoose.model("List", listSchema);
const itemAdded = [];
const workItems = [];

const item1 = new Item({
    name: "Welcome"
});
const item2 = new Item({
    name: "Hit + button to add new items"
});
const item3 = new Item({
    name: "Delete item"
});
const defaultItems = [item1, item2, item3];

app.get("/", function(req, res){
    Item.find({}, function(err, foundItems){
        if(foundItems.length === 0){
            Item.insertMany(defaultItems, function(err){
                if(err){
                    console.log(err);
                }
                else {
                    console.log("Success");
                }
            });
            res.redirect("/");
        }
        else {
        res.render("list", {
            listTitle: "Today",
            itemName: foundItems
        });
    }
    });
});

app.post("/", function(req, res){
    const itemName = req.body.item;
    const listName = req.body.list;
    const item = new Item ({
        name: itemName
    });
    if(listName === "Today"){
        item.save();
    res.redirect("/");
    } else {
        List.findOne({name: listName}, function(err, foundList){
            foundList.items.push(item);
            foundList.save();
            res.redirect("/" + listName);
        })
    }
    
});

app.post("/delete", function(req, res){
    const checkedItemId = req.body.checkbox;
    const listName = req.body.listName;
  
    if (listName === "Today") {
      Item.findByIdAndRemove(checkedItemId, function(err){
        if (!err) {
          console.log("Successfully deleted checked item.");
          res.redirect("/");
        }
      });
    } else {
      List.findOneAndUpdate({name: listName}, {$pull: {items: {_id: checkedItemId}}}, function(err, foundList){
        if (!err){
          res.redirect("/" + listName);
        }
      });
    }
  
  
  });

  app.get("/:customListName", function(req, res){
    const customListName = _.capitalize(req.params.customListName);
  
    List.findOne({name: customListName}, function(err, foundList){
      if (!err){
        if (!foundList){
          //Create a new list
          const list = new List({
            name: customListName,
            items: defaultItems
          });
          list.save();
          res.redirect("/" + customListName);
        } else {
          //Show an existing list
  
          res.render("list", {listTitle: foundList.name, itemName: foundList.items});
        }
      }
    });
  
  
  
  });

app.get("/about", function(req, res){
    res.render("about");
});

app.listen(3000, function(){
    console.log("server running at port: 3000");
});

//mongodb+srv://swayamg20:<password>@clusternote.uepir.mongodb.net/myFirstDatabase?retryWrites=true&w=majority