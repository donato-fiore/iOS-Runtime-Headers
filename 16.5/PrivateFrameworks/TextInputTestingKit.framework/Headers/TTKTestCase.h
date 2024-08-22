// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKTESTCASE_H
#define TTKTESTCASE_H

@class NSMutableDictionary, NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface TTKTestCase : NSObject

@property (readonly, copy, nonatomic) NSMutableDictionary *annotations; // ivar: _annotations
@property (readonly, copy, nonatomic) NSString *intendedText; // ivar: _intendedText
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSArray *records; // ivar: _records


+(id)convertToIsolatedWordMode:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 records:(id)arg1 ;
-(id)initWithMetadata:(id)arg0 records:(id)arg1 intendedText:(id)arg2 ;
-(id)toJsonDictionary;


@end


#endif