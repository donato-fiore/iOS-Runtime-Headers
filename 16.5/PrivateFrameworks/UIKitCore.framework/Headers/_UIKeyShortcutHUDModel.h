// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYSHORTCUTHUDMODEL_H
#define _UIKEYSHORTCUTHUDMODEL_H

@class NSMapTable, NSMutableSet, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UIMenuLeafValidation.h"
#import "_UIKeyShortcutHUDMenu.h"

@interface _UIKeyShortcutHUDModel : NSObject <NSSecureCoding>

 {
    NSMapTable *_displayableAppKeyCommandToModelShortcutMap;
    NSMutableSet *_performableAppKeyCommands;
    NSMutableSet *_equivalentKeyCommandsInPriorityAlreadyEnumerated;
    NSMapTable *_appKeyCommandToModelKeyCommandMap;
    *__GSKeyboard _gsKeyboard;
    _UIMenuLeafValidation *_validation;
}


@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) _UIKeyShortcutHUDMenu *menu; // ivar: _menu
@property (retain, nonatomic) NSMutableDictionary *modelKeyCommandToAppKeyCommandMap; // ivar: _modelKeyCommandToAppKeyCommandMap
@property (retain, nonatomic) NSMapTable *modelKeyCommandToModelShortcutMap; // ivar: _modelKeyCommandToModelShortcutMap
@property (retain, nonatomic) NSMutableSet *modelKeyCommands; // ivar: _modelKeyCommands


+(BOOL)supportsSecureCoding;
+(id)modelForCurrentMenu;
-(BOOL)_isKeyCommandPerformable:(id)arg0 outTarget:(*id)arg1 ;
-(id)_finalizedHUDMenuFromValidatedHUDMenu:(id)arg0 ;
-(id)_menuByOmittingNonKeyCommandsInMenu:(id)arg0 ;
-(id)_responderBasedKeyCommandsStartingAtResponder:(id)arg0 ;
-(id)_sanitizedMainMenu;
-(id)_validatedHUDMenuFromUIMenu:(id)arg0 ;
-(id)appKeyCommandForSelectedKeyCommand:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)menuWithAlternatesForModifierFlags:(NSInteger)arg0 ;
-(id)modelKeyCommandsExcludingHUDCommands:(id)arg0 ;
-(id)modelShortcutForModelKeyCommand:(id)arg0 ;
-(id)originalTargetForSelectedKeyCommand:(id)arg0 ;
-(id)searchMenuWithSearchText:(id)arg0 maxSearchResultEntries:(NSUInteger)arg1 ;
-(void)_addShortcutsFromHUDMenu:(id)arg0 toShortcutsArray:(id)arg1 ;
-(void)_buildMenu;
-(void)_enumerateKeyCommandsInMenu:(id)arg0 block:(id)arg1 ;
-(void)_validateBaseKeyCommand:(id)arg0 usingAlternate:(id)arg1 ;
-(void)_validateKeyCommandAndAlternates:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif