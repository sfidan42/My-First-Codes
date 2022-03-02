
function w=palindrome(v)
r=reversal(v);
if v==r
    w=true;
else
    w=false;
end
    
function rev=reversal(in)
if length(in)<=1
    rev=in;
else
    rev(1)=in(end);
    in=in(1:end-1);
    rev=[rev(1),reversal(in)];
end