function database=voters(varargin)
database=varargin{1};
class(database)
x=length(database);
if isa(database,'double')
    database={};
end
for i=2:2:nargin-1     %it is okay if i type nargin-2 as well.
    if ischar(varargin{i}) && isa(varargin{i+1},'double')
        database(x).Name=varargin{i};
        database(x).ID=varargin{i+1};
        x=x+1;
    else
        database=varargin{1};
        break
    end
end