This module extends some of the underlying commerce data structures to enable better merchandising capabilities and provides some optional (but hopefully useful) templates and views to make merchandising much easier.

## Data Structure Enhancements

1.  When a product is added to the cart (in the form of a line item), the only reference back to that product is stored in the serialized data structure in the table.  This module adds a new field to the line item table that allows views to reference the adding product from the line item.  Why would you do this?  Well, it allows you to pull taxonomy or product reference data information off of the parent product display that might be painful to add to each individual product itself (e.g. product category, related products, or cross-sells).  The benefit is that now you can tag related products on a display level, rather than at the SKU level, saving time and making things much more straightforward from a management standpoint.

## Views, Templates, Product View Modes

The following views and templates have been added to enhance Commerce Kickstart's merchandising capabilities out of the box.

1.  View modes for cross sells, up sells, and related products.
2.  Additional template suggestions for those view modes.
3.  Related products and up-sell view for product display pages.
4.  Add-to-cart confirmation page view for cross-sells.