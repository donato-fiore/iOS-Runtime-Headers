// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCAPTURETEXTANALYSISREQUEST_H
#define VKCAPTURETEXTANALYSISREQUEST_H

@class NSString, UIImage;
@protocol NSCopying, VKFeedbackAssetsProvider, VKCaptureTextAnalysisRequestDelegate;

#import <Foundation/Foundation.h>

#import "VKQuad.h"

@interface VKCaptureTextAnalysisRequest : NSObject <NSCopying, VKFeedbackAssetsProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<VKCaptureTextAnalysisRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VKQuad *focusQuad; // ivar: _focusQuad
@property (readonly, nonatomic) CGRect focusRect;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly) Class superclass;


-(BOOL)saveAssetsToFeedbackAttachmentsFolder:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithImage:(id)arg0 delegate:(id)arg1 ;
-(id)initWithImage:(id)arg0 focusQuad:(id)arg1 delegate:(id)arg2 ;
-(id)initWithImage:(id)arg0 focusRect:(struct CGRect )arg1 delegate:(id)arg2 ;
-(id)requestHandler;


@end


#endif