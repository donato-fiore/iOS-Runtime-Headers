// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPNSATTRIBUTEDSTRINGATTACHMENTCONVERSIONDELEGATE_H
#define TSWPNSATTRIBUTEDSTRINGATTACHMENTCONVERSIONDELEGATE_H

@class NSString;
@protocol TSWPNSAttributedStringAttachmentConversionDelegate;

#import <Foundation/Foundation.h>


@interface TSWPNSAttributedStringAttachmentConversionDelegate : NSObject <TSWPNSAttributedStringAttachmentConversionDelegate>

 {
    BOOL mConvertHyperlinks;
    BOOL mConvertAttachments;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attachmentStringForDrawableAttachment:(id)arg0 ;
-(id)init;
-(id)initWithConvertHyperlinks:(BOOL)arg0 convertGraphicalAttachments:(BOOL)arg1 ;
-(id)urlForHyperlinkField:(id)arg0 ;


@end


#endif