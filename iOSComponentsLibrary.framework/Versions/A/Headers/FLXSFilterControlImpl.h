#import "FLXSVersion.h"
#import "FLXSIFilterControl.h"
#import "FLXSIFilterControlContainer.h"
#import "FLXSIDataGridFilterColumn.h"
#import "FLXSIExtendedDataGrid.h"

@interface FLXSFilterControlImpl : NSObject
{

}

@property (nonatomic, strong) UIView <FLXSIFilterControl>* iFilterControl;
@property (nonatomic, assign) BOOL registered;
@property (nonatomic, strong) NSString* searchField;
@property (nonatomic, strong) NSString* filterOperation;
@property (nonatomic, strong) NSObject <FLXSIExtendedDataGrid>* grid;
@property (nonatomic, strong) NSObject<FLXSIDataGridFilterColumn> * gridColumn;
@property (nonatomic, strong) NSString* filterComparisonType;
@property (nonatomic, strong) NSString* filterTriggerEvent;
@property (nonatomic, strong) NSString* dataField;
@property (nonatomic, assign) BOOL autoRegister;

-(id)initWithFilterControl:(UIView <FLXSIFilterControl>*)iFilterControl;
-(void)register:(NSObject <FLXSIFilterControlContainer>*)container;
@end

