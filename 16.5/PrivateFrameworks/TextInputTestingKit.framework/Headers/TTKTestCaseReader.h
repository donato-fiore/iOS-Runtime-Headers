// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKTESTCASEREADER_H
#define TTKTESTCASEREADER_H


#import <Foundation/Foundation.h>


@interface TTKTestCaseReader : NSObject



+(id)loadFromDir:(id)arg0 ;
+(id)loadFromFile:(id)arg0 ;
+(id)loadFromFile:(id)arg0 inputMode:(id)arg1 layouts:(id)arg2 ;
+(id)loadFromPath:(id)arg0 ;
+(id)loadFromPath:(id)arg0 fileManager:(id)arg1 ;


@end


#endif