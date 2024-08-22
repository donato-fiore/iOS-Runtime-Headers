// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTTSSTRING_H
#define WFTTSSTRING_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface WFTTSString : NSObject

@property (readonly, nonatomic) NSArray *components; // ivar: _components
@property (readonly, nonatomic) NSString *displayString;


+(id)parseAnnotatedString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithComponents:(id)arg0 ;


@end


#endif