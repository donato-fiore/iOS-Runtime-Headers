// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNIMAGER_H
#define KNIMAGER_H

@class TSAImager, NSString;
@protocol TSDConnectedInfoReplacing, TSDCanvasProxyDelegate;


#import "KNBodyPlaceholderInfo.h"
#import "KNTitlePlaceholderInfo.h"
#import "KNAbstractSlide.h"

@interface KNImager : TSAImager <TSDConnectedInfoReplacing>



@property (readonly, nonatomic) NSObject<TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) KNBodyPlaceholderInfo *replacementBodyPlaceholder; // ivar: _replacementBodyPlaceholder
@property (retain, nonatomic) KNTitlePlaceholderInfo *replacementTitlePlaceholder; // ivar: _replacementTitlePlaceholder
@property (weak, nonatomic) KNAbstractSlide *slide; // ivar: _slide
@property (nonatomic) NSUInteger slideNumber; // ivar: _slideNumber
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL verticalTextAllowed;


-(BOOL)isInfoAKeynoteTemplateObject:(id)arg0 ;
-(id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg0 ;
-(id)initWithDocumentRoot:(id)arg0 ;


@end


#endif