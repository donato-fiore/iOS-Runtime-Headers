// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13TRANSLATIONUI23VISUALTRANSLATIONRESULT_H
#define _TTC13TRANSLATIONUI23VISUALTRANSLATIONRESULT_H

@class NSString, NSUUID;
@protocol _TtP13TranslationUI35LTUIVisualTranslationResultProtocol_;

#import <Foundation/Foundation.h>


@interface _TtC13TranslationUI23VisualTranslationResult : NSObject <_TtP13TranslationUI35LTUIVisualTranslationResultProtocol_>

 {
    ? uuid;
    ? string;
}


@property (nonatomic, readonly) CGPoint bottomLeft; // ivar: bottomLeft
@property (nonatomic, readonly) CGPoint bottomRight; // ivar: bottomRight
@property (nonatomic, readonly) BOOL isPassthrough; // ivar: isPassthrough
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) CGPoint topLeft; // ivar: topLeft
@property (nonatomic, readonly) CGPoint topRight; // ivar: topRight
@property (nonatomic, readonly) NSUUID *uuid;


-(id)init;


@end


#endif