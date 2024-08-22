// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EQKITENVIRONMENT_H
#define EQKITENVIRONMENT_H


#import <Foundation/Foundation.h>


@interface EQKitEnvironment : NSObject



+(id)dataForDefaultEnvironment;
+(id)dataForEnvironment:(id)arg0 ;
+(id)defaultEnvironment;
+(id)environmentFromData:(id)arg0 ;
-(void)reloadFonts;


@end


#endif