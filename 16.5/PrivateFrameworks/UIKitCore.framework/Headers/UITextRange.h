// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTRANGE_H
#define UITEXTRANGE_H

@protocol NSObject;

#import <Foundation/Foundation.h>

#import "UITextPosition.h"
#import "UITextRangeImpl.h"

@interface UITextRange : NSObject

@property (retain, nonatomic, getter=_attachmentRange, setter=_setAttachmentRange:) NSObject<NSObject> *_attachmentRange; // ivar: _attachmentRange
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) UITextPosition *end;
@property (readonly, nonatomic, getter=_isCaret) BOOL isCaret;
@property (readonly, nonatomic, getter=_isImpl) UITextRangeImpl *isImpl;
@property (readonly, nonatomic, getter=_isRanged) BOOL isRanged;
@property (readonly, nonatomic) UITextPosition *start;


-(struct _NSRange )_asNSRangeRelativeToDocument:(id)arg0 ;
-(struct _NSRange )_asNSRangeRelativeToDocument:(id)arg0 relativeToCurrentLine:(BOOL)arg1 ;


@end


#endif