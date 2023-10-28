# easyBillingTest
Sample billing test to make some discount 
i,e.
Product Name	Price
Product A	$20
Product B	$40
Product C	$50

Discount Rules are:
1."flat_10_discount": If cart total exceeds $200, apply a flat $10 discount on the cart total.
2."bulk_5_discount": If quantity of any single product exceeds 10 units, apply a 5% discount on that item's total price.
3."bulk_10_discount": If total quantity exceeds 20 units, apply a 10% discount on the cart total.

Total amount is by adding, 
1.Gift wrap fee: $1 per unit.
2.shipping fee is the half of the total quantity.
