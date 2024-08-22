// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKEYBOARDDATAINPUTUICLIENT_H
#define TYPISTKEYBOARDDATAINPUTUICLIENT_H

@class NSString;
@protocol TypistKeyboardDataProtocol;

#import <Foundation/Foundation.h>


@interface TypistKeyboardDataInputUIClient : NSObject <TypistKeyboardDataProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)connectToRemoteKeyboard:(CGFloat)arg0 ;
+(BOOL)dismissKeyboard;
+(BOOL)hasMarkedText;
+(BOOL)isExtendedCandidateViewMode;
+(BOOL)switchToKeyboard:(id)arg0 ;
+(BOOL)switchToPlane:(id)arg0 ;
+(id)addKeyboardPopupKeys:(id)arg0 keys:(id)arg1 inPlane:(id)arg2 addTo:(id)arg3 keyplaneKeycaps:(id)arg4 ;
+(id)addKeyboards:(id)arg0 ;
+(id)dismissOneTimeTIActions:(id)arg0 ;
+(id)generateKeyplaneSwitchTable:(id)arg0 ;
+(id)generateKeyplaneSwitchTableFor10Key:(id)arg0 ;
+(id)getAllCandidates;
+(id)getKeyboardLayout:(id)arg0 ;
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
+(id)setTIPreferences:(id)arg0 ;
+(struct CGPoint )centerOfKey:(struct CGPoint )arg0 withOffset:(struct CGPoint )arg1 ;
+(struct CGPoint )floatingKeyboardDraggablePoint;
+(struct CGPoint )getCandidateCenter:(id)arg0 ;
+(struct CGPoint )getCandidateCenterAtIndex:(NSInteger)arg0 ;
+(struct CGPoint )getExtendedCandidateViewToggleButtonCenter;
+(struct CGRect )findKeyBoundsInKeyboard:(id)arg0 ;
+(struct CGRect )getCandidateBarRect;
+(void)disconnectFromRemoteKeyboard;
+(void)showCandidateAtIndex:(NSInteger)arg0 ;
+(void)tryConnection;


@end


#endif