#import "FLXSVersion.h"
@class FLXSFlexDataGridColumnLevel;

@interface FLXSVirtualScrollLoadInfo : NSObject
{
}

@property (nonatomic, strong) FLXSFlexDataGridColumnLevel* level;
@property (nonatomic, assign) int recordIndex;
@property (nonatomic, assign) float verticalScrollPosition;
@property (nonatomic, assign) float itemHeight;
@property (nonatomic, strong) NSObject* item;
@property (nonatomic, strong) NSObject* parent;
@property (nonatomic, assign) int rowType;

- (id)initWithLevel:(FLXSFlexDataGridColumnLevel *)level andRecordIndex:(int)recordIndex andVerticalScrollPosition:(float)verticalScrollPosition andItemHeight:(float)itemHeight andItem:(NSObject *)item andParent:(NSObject *)parent andRowType:(int)rowType;
-(int)levelNestDepth;
-(NSString*)toString;
-(float)itemArea;
-(BOOL)isParentOf:(FLXSVirtualScrollLoadInfo*)child;

@end

