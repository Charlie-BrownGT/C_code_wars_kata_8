int area_or_perimeter(int l , int w) {
  
if (l == w){

    int area = l * w;
    return area;
}
else if (l != w){

    int perimeter = ((2 * l) + (2 * w));
    return perimeter;
}
}