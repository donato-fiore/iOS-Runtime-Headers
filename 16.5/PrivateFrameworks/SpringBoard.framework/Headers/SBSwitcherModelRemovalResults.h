// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERMODELREMOVALRESULTS_H
#define SBSWITCHERMODELREMOVALRESULTS_H

@class NSMutableSet, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SBSwitcherModelRemovalResults : NSObject {
    NSMutableSet *_appLayouts;
    NSMutableDictionary *_appLayoutToAction;
    NSMutableDictionary *_displayItemToHide;
    NSMutableDictionary *_appLayoutToReplacement;
}


@property (readonly, copy, nonatomic) NSArray *appLayouts;


-(BOOL)willHideDisplayItem:(id)arg0 ;
-(id)init;
-(id)replacementAppLayoutForAppLayout:(id)arg0 ;
-(void)executeActionForAppLayout:(id)arg0 ;
-(void)removeAppLayout:(id)arg0 ;
// -(void)setAction:(id)arg0 forAppLayout:(unk)arg1  ;
-(void)setHide:(BOOL)arg0 forDisplayItem:(id)arg1 ;
-(void)setReplacementAppLayout:(id)arg0 forAppLayout:(id)arg1 ;


@end


#endif