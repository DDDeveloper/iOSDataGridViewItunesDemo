#import "FLXSFlexDataGridColumn.h"
#import "FLXSVersion.h"

@interface FLXSCellInfo : NSObject
{
}

@property (nonatomic, strong) NSObject* rowData;
@property (nonatomic, strong) FLXSFlexDataGridColumn* column;

- (id)initWithRowData:(NSObject *)rowData andColumn:(FLXSFlexDataGridColumn *)column;

@end

