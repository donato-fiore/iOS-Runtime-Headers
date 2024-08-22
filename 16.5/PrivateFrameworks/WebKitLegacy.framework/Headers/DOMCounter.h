// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOMCOUNTER_H
#define DOMCOUNTER_H

@class NSString;


#import "DOMObject.h"

@interface DOMCounter : DOMObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *listStyle;
@property (readonly, copy) NSString *separator;


-(void)dealloc;


@end


#endif