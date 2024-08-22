// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTTRANSLATIONRANGE_H
#define _LTTRANSLATIONRANGE_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _LTTranslationRange : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *metaInfo; // ivar: _metaInfo
@property (readonly, nonatomic) BOOL shouldTranslate; // ivar: _shouldTranslate
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithIdentifier:(id)arg0 text:(id)arg1 shouldTranslate:(BOOL)arg2 ;


@end


#endif