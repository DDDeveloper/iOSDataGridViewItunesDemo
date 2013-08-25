#import "FLXSVersion.h"
@class FLXSFlexDataGridColumnLevel;

@interface FLXSItemLoadInfo : NSObject
{
}

@property (nonatomic, strong) NSObject* item;
@property (nonatomic, assign) BOOL hasLoaded;
@property (nonatomic, assign) int totalRecords;
@property (nonatomic, assign) int pageIndex;
@property (nonatomic, strong) FLXSFlexDataGridColumnLevel* level;

- (id)initWithItem:(NSObject *)item andLevel:(FLXSFlexDataGridColumnLevel *)level andHasLoaded:(BOOL)hasLoaded;

- (BOOL)isEqual:(NSObject *)compare levelToCompare:(FLXSFlexDataGridColumnLevel *)levelToCompare useSelectedKeyField:(BOOL)useSelectedKeyField;

@end

