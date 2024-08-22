// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTSECTIONSCONTROLLER_H
#define SUSCRIPTSECTIONSCONTROLLER_H



#import "SUScriptObject.h"
#import "SUScriptSection.h"

@interface SUScriptSectionsController : SUScriptObject

@property (readonly) id *sections;
@property (retain) SUScriptSection *selectedSection;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_copySectionWithIdentifier:(id)arg0 ;
-(id)_fixedSelectedIdentifier;
-(id)attributeKeys;
-(id)init;
-(id)scriptAttributeKeys;
-(id)sectionWithIdentifier:(id)arg0 ;
-(void)_setSelectedIdentifier:(id)arg0 ;
-(void)_tabBarConfigurationChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)setRootViewController:(id)arg0 forSection:(id)arg1 ;


@end


#endif