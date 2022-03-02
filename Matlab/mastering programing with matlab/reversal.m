function w=reversal(v)
if length(v)<=1
    w=v;
else
    w(1)=v(end);
    v=v(1:end-1);
    w=[w(1),reversal(v)];
end