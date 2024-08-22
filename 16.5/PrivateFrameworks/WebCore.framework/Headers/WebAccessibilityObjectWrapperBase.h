// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBACCESSIBILITYOBJECTWRAPPERBASE_H
#define WEBACCESSIBILITYOBJECTWRAPPERBASE_H


#import <Foundation/Foundation.h>


@interface WebAccessibilityObjectWrapperBase : NSObject {
    *void m_axObject;
}


@property (nonatomic) ObjectIdentifier<WebCore::AXIDType> identifier; // ivar: _identifier


+(void)accessibilitySetShouldRepostNotifications:(BOOL)arg0 ;
-(*void)axBackingObject;
-(*void)baseUpdateBackingStore;
-(BOOL)_prepareAccessibilityCall;
-(BOOL)isIsolatedObject;
-(id)_accessibilityWebDocumentView;
-(id)accessibilityCustomContent;
-(id)accessibilityMathPostscriptPairs;
-(id)accessibilityMathPrescriptPairs;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(id)ariaLandmarkRoleDescription;
-(id)attachmentView;
-(id)baseAccessibilityHelpText;
-(id)baseAccessibilityResolvedEditingStyles;
-(id)baseAccessibilitySpeechHint;
-(id)contentForSimpleRange:(*void)arg0 attributed:(BOOL)arg1 ;
-(id)initWithAccessibilityObject:(*void)arg0 ;
-(id)innerHTML;
-(id)lineRectsAndText;
-(id)outerHTML;
-(struct CGPath *)convertPathToScreenSpace:(*void)arg0 ;
-(struct CGRect )convertRectToSpace:(struct FloatRect *)arg0 space:(int)arg1 ;
-(struct _NSRange )accessibilityVisibleCharacterRange;
-(void)accessibilityPostedNotification:(id)arg0 ;
-(void)accessibilityPostedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)attachAXObject:(*void)arg0 ;
-(void)detach;


@end


#endif