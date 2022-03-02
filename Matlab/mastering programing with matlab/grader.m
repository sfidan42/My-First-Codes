function ans=grader(x,y,varargin)
for i=1:nargin-2
    if x(varargin{i})==y(varargin{i})
        ans=true;
    else
        ans=false;
    end
end