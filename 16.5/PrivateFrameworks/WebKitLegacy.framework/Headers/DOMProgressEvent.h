// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMPROGRESSEVENT_H
#define DOMPROGRESSEVENT_H



#import "DOMEvent.h"

@interface DOMProgressEvent : DOMEvent

@property (readonly) BOOL lengthComputable;
@property (readonly) NSUInteger loaded;
@property (readonly) NSUInteger total;




@end


#endif