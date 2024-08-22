// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIMENUBUILDER_H
#define _UIMENUBUILDER_H

@class NSArray;
@protocol NSCopying, UIMenuBuilder;

#import <Foundation/Foundation.h>

#import "UIMenuSystem.h"

@interface _UIMenuBuilder : NSObject <NSCopying, UIMenuBuilder>

 {
    ? _analysis;
    NSArray *_keyCommandsCache;
}


@property (readonly, nonatomic) NSUInteger _actualChangeCount; // ivar: __actualChangeCount
@property (readonly, nonatomic) NSUInteger _changeCount; // ivar: __changeCount
@property (readonly, nonatomic) NSArray *_keyCommands;
@property (weak, nonatomic) UIMenuSystem *system; // ivar: _system


-(BOOL)_isInternallyConsistent;
-(id)_firstValidMenuWithinIdentifiers:(id)arg0 ;
-(id)_internalDiffForDiffv1:(id)arg0 ;
-(id)_parentOfMenuForIdentifier:(id)arg0 commandForIdentifier:(id)arg1 ;
-(id)actionForIdentifier:(id)arg0 ;
-(id)commandForAction:(SEL)arg0 propertyList:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRootMenu:(id)arg0 ;
-(id)initWithSystem:(id)arg0 analysis:(struct ? )arg1 ;
-(id)menuForIdentifier:(id)arg0 ;
-(void)_insertMenu:(id)arg0 intoParentMenu:(id)arg1 newParentMenu:(id)arg2 ;
-(void)_patch:(id)arg0 ;
-(void)_patchInternalDiff:(id)arg0 ;
-(void)_recacheCommandsIfNeeded;
-(void)_replaceMenu:(id)arg0 withMenu:(id)arg1 ;
-(void)_setNeedsRecacheCommands;
-(void)insertChildMenu:(id)arg0 atEndOfMenuForIdentifier:(id)arg1 ;
-(void)insertChildMenu:(id)arg0 atStartOfMenuForIdentifier:(id)arg1 ;
-(void)insertSiblingMenu:(id)arg0 afterMenuForIdentifier:(id)arg1 ;
-(void)insertSiblingMenu:(id)arg0 beforeMenuForIdentifier:(id)arg1 ;
-(void)removeMenuForIdentifier:(id)arg0 ;
-(void)replaceChildrenOfMenuForIdentifier:(id)arg0 fromChildrenBlock:(id)arg1 ;
-(void)replaceMenuForIdentifier:(id)arg0 withMenu:(id)arg1 ;


@end


#endif