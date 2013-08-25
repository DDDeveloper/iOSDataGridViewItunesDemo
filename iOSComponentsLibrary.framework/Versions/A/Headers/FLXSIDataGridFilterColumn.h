#import "FLXSVersion.h"

#import "FLXSClassFactory.h"

@protocol FLXSIDataGridFilterColumn
@property (nonatomic, strong) NSString* headerText;
@property (nonatomic, strong) NSArray* filterComboBoxDataProvider;
@property (nonatomic, strong) NSString* filterComboBoxLabelField;
@property (nonatomic, readonly) NSString* sortFieldName;
@property (nonatomic, strong) NSString* filterComboBoxDataField;
@property (nonatomic, assign) BOOL filterComboBoxBuildFromGrid;
@property (nonatomic, strong) NSArray* filterDateRangeOptions;
@property (nonatomic, strong) FLXSClassFactory* filterRenderer;
@property (nonatomic, strong) NSString* filterControlClass;
@property (nonatomic, strong) NSString* filterOperation;
@property (nonatomic, strong) NSString* filterComparisonType;
@property (nonatomic, strong) NSString* searchField;
@property (nonatomic, strong) NSString* sortField;
@property (nonatomic, strong) NSString* filterTriggerEvent;
@property (nonatomic, strong) NSString* sortCompareFunction;
@property (nonatomic, assign) float filterComboBoxWidth;
@property (nonatomic, strong) NSString* linkText;
@property (nonatomic, strong) NSString* clickBehavior;
@property (nonatomic, assign) BOOL useCurrentDataProviderForFilterComboBoxValues;
@property (nonatomic, assign) BOOL enableRecursiveSearch;

-(NSString*)itemToLabelCommon:(NSObject*)item;
-(BOOL)isSortable;
@end

