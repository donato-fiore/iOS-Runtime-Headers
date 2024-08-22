// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPDEFAULTGRAPHICALATTACHMENTRENDERER_H
#define TSWPDEFAULTGRAPHICALATTACHMENTRENDERER_H

@class NSString;
@protocol TSWPGraphicalAttachmentRenderer;

#import <Foundation/Foundation.h>


@interface TSWPDefaultGraphicalAttachmentRenderer : NSObject <TSWPGraphicalAttachmentRenderer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)drawAttachment:(id)arg0 inContext:(struct CGContext *)arg1 selection:(id)arg2 ;


@end


#endif