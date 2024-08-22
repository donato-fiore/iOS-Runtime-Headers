// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDDATAINPROCESS_H
#define TYPISTKEYBOARDDATAINPROCESS_H

@class NSString;
@protocol TypistKeyboardDataProtocol;

#import <Foundation/Foundation.h>


@interface TypistKeyboardDataInProcess : NSObject <TypistKeyboardDataProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_activeInputModesContainsInputMode:(id)arg0 ;
+(BOOL)dismissKeyboard;
+(BOOL)generatePopupKeySubtrees:(id)arg0 key:(id)arg1 plane:(id)arg2 layout:(id)arg3 keyplaneKeycaps:(id)arg4 ;
+(BOOL)hasMarkedText;
+(BOOL)isCandidateCellVisible:(id)arg0 ;
+(BOOL)isExtendedCandidateViewMode;
+(BOOL)keyHasAccentedVariants:(id)arg0 plane:(id)arg1 keyplaneKeycaps:(id)arg2 ;
+(BOOL)shouldShowDictationKey;
+(BOOL)shouldShowGlobeKey;
+(BOOL)switchToKeyboard:(id)arg0 ;
+(BOOL)switchToPlane:(id)arg0 ;
+(NSUInteger)downActionFlagsForKey:(id)arg0 plane:(id)arg1 keyplaneKeycaps:(id)arg2 ;
+(id)_variantsByAppendingDualStringKey:(id)arg0 toVariants:(id)arg1 ;
+(id)addKeyboardGestureKeys:(id)arg0 keys:(id)arg1 inPlane:(id)arg2 addTo:(id)arg3 ;
+(id)addKeyboardPopupKeys:(id)arg0 keys:(id)arg1 inPlane:(id)arg2 addTo:(id)arg3 keyplaneKeycaps:(id)arg4 ;
+(id)addKeyboards:(id)arg0 ;
+(id)appendingSecondaryStringToVariantsTop:(id)arg0 secondaryString:(id)arg1 withDirection:(id)arg2 ;
+(id)cleanUpSwitchTableBasedOnDefaultPlane:(id)arg0 defaultPlaneName:(id)arg1 ;
+(id)determineDefaultPlane10Key:(id)arg0 basePlaneName:(id)arg1 ;
+(id)determineDefaultPlane:(id)arg0 basePlaneName:(id)arg1 ;
+(id)dismissOneTimeTIActions:(id)arg0 ;
+(id)generateKeyplaneSwitchTable:(id)arg0 ;
+(id)generateKeyplaneSwitchTableFor10Key:(id)arg0 ;
+(id)getAllCandidates;
+(id)getKeyboardLayout:(id)arg0 ;
+(id)getKeyboardPlaneKeys:(id)arg0 keys:(id)arg1 inPlane:(id)arg2 ;
+(id)getKeyboardUISettings;
+(id)getKeyplaneDescription:(id)arg0 ;
+(id)getRepresentedStringFromKey:(id)arg0 ;
+(id)getSentenceBoundaryStrings;
+(id)getTIPreferences;
+(id)getVisibleCandidateList:(id)arg0 ;
+(id)getVisibleKeyplaneName;
+(id)markedText;
+(id)removeKeyboards:(id)arg0 ;
+(id)setKeyboardUISettings:(id)arg0 ;
+(id)setKeyboards:(id)arg0 ;
+(id)setOneHandedKeyboardHandBias:(id)arg0 ;
+(id)setTIPreferences:(id)arg0 ;
+(id)updateCachedKeyplaneKeycaps:(id)arg0 ;
+(int)getShuangpinEnumeration:(id)arg0 ;
+(int)getWubiEnumeration:(id)arg0 ;
+(struct CGPoint )centerOfKey:(struct CGPoint )arg0 withOffset:(struct CGPoint )arg1 ;
+(struct CGPoint )floatingKeyboardDraggablePoint;
+(struct CGPoint )getCandidateCenter:(id)arg0 ;
+(struct CGPoint )getCandidateCenterAtIndex:(NSInteger)arg0 ;
+(struct CGPoint )getExtendedCandidateViewToggleButtonCenter;
+(struct CGRect )findKeyBoundsInKeyboard:(id)arg0 ;
+(struct CGRect )getCandidateBarRect;
+(void)showCandidateAtIndex:(NSInteger)arg0 ;
+(void)showPopupVariantsForKey:(id)arg0 key:(id)arg1 plane:(id)arg2 keyplaneKeycaps:(id)arg3 ;


@end


#endif