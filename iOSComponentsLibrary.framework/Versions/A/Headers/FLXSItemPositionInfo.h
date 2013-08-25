#import "FLXSVersion.h"
@class FLXSFlexDataGridColumnLevel;

@interface FLXSItemPositionInfo : NSObject
{
}

@property (nonatomic, strong) FLXSFlexDataGridColumnLevel* level;
@property (nonatomic, assign) float pageIndex;
@property (nonatomic, assign) float itemIndex;
@property (nonatomic, strong) NSObject* item;

- (id)initWithItem:(NSObject *)item andLevel:(FLXSFlexDataGridColumnLevel *)level andPageIndex:(int)pageIndex andItemIndex:(float)itemindex;

@end

