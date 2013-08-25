#import "FLXSVersion.h"

@interface FLXSChangeInfo : NSObject
{

}

@property (nonatomic, strong) NSObject* changedItem;
@property (nonatomic, strong) NSString* changedProperty;
@property (nonatomic, strong) NSObject* previousValue;
@property (nonatomic, strong) NSObject* changedValue;
@property (nonatomic, strong) NSObject* origValue;
@property (nonatomic, strong) NSString* changeType;
@property (nonatomic, assign) int changeLevelNestDepth;

- (id)initWithChangedItem:(NSObject *)changedItem changeLevelNestDepth:(int)changeLevelNestDepth changedProperty:(NSString *)changedProperty previousValue:(NSObject *)previousValue changedValue:(NSObject *)newValue changeType:(NSString *)changeType;

-(NSString*)toString;

+ (NSString*)CHANGE_TYPE_INSERT;
+ (NSString*)CHANGE_TYPE_UPDATE;
+ (NSString*)CHANGE_TYPE_DELETE;
@end

