#import "FLXSVersion.h"
#import "FLXSIExtendedDataGrid.h"
@protocol FLXSIExtendedDataGrid;

@protocol FLXSIPager

@property (nonatomic,assign) int pageIndex;
@property (nonatomic,assign) int totalRecords;
@property (nonatomic,assign) int pageSize;
@property (nonatomic,strong) FLXSFlexDataGrid* grid;

-(void)pagerPosition:(NSString*)val;
-(void)reset;
@end

