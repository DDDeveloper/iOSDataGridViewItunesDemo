#import "FLXSIDataGridFilterColumn.h"
#import "FLXSIEventDispatcher.h"
#import "FLXSVersion.h"
@protocol FLXSIExtendedDataGrid;

@protocol FLXSIFilterControl <FLXSIEventDispatcher>



//FLXSIFilterControl methods
@property (nonatomic, strong) NSString* searchField;
@property (nonatomic, strong) NSString* filterOperation;
@property (nonatomic, strong) NSString* filterTriggerEvent;
@property (nonatomic, strong) NSString* filterComparisonType;
@property (nonatomic, strong) NSObject <FLXSIExtendedDataGrid>* grid;
@property (nonatomic, strong) NSObject <FLXSIDataGridFilterColumn>* gridColumn;
@property (nonatomic, assign) BOOL autoRegister;
-(void)clear;
-(NSString*)getValue;
-(void)setValue:(NSObject*)val;
//End IFilter control methods


@end

