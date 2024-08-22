// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTUISOURCEMETA_H
#define LTUISOURCEMETA_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface LTUISourceMeta : NSObject

@property (copy, nonatomic) NSString *context; // ivar: _context
@property (copy, nonatomic) NSArray *languageHints; // ivar: _languageHints
@property (nonatomic) NSUInteger origin; // ivar: _origin


-(id)dictionaryRepresentation;
-(id)init;


@end


#endif