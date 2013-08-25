#import "FLXSEvent.h"
#import "FLXSVersion.h"

@interface FLXSPreferencePersistenceEvent : FLXSEvent
{

}

@property (nonatomic, strong) NSString* preferenceKey;
@property (nonatomic, strong) NSString* preferenceXml;
@property (nonatomic, strong) NSString* customData;
@property (nonatomic, strong) NSString* preferenceName;
@property (nonatomic, assign) BOOL isDefault;

- (id)initWithType:(NSString *)type andPreferenceKey:(NSString *)preferenceKey andPreferenceXML:(NSString *)preferenceXml andBubbles:(BOOL)bubbles andCancelable:(BOOL)cancelable;
/**
* Fired In preferencePersistenceMode=server , when the grid needs to load its preferences.
* Fired In preferencePersistenceMode=client , when the grid has successfully loaded preferences.
* Event Type:com.flexicious.grids.events.PreferencePersistenceEvent
*/
+ (NSString*)PREFERENCES_LOADING;
/**
 * Fired right before preferences are being loaded and applied.
 * Event Type:com.flexicious.grids.events.PreferencePersistenceEvent
 */
+ (NSString*)LOAD_PREFERENCES;
/**
    * Fired when the grid needs to persist its preferences.
    * Event Type:com.flexicious.grids.events.PreferencePersistenceEvent
    */
+ (NSString*)PERSIST_PREFERENCES;
/**
     * Fired when the grid needs to clear its preferences.
     * Event Type:com.flexicious.grids.events.PreferencePersistenceEvent
     */
+ (NSString*)CLEAR_PREFERENCES;
@end

