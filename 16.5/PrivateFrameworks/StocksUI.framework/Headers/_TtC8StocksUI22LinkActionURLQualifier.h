// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8STOCKSUI22LINKACTIONURLQUALIFIER_H
#define _TTC8STOCKSUI22LINKACTIONURLQUALIFIER_H

@protocol SXLinkActionURLQualifier;

#import <Foundation/Foundation.h>


@interface _TtC8StocksUI22LinkActionURLQualifier : NSObject <SXLinkActionURLQualifier>





-(BOOL)allowCopyingOfURL:(id)arg0 ;
-(BOOL)allowOpenInNewWindowForURL:(id)arg0 ;
-(BOOL)allowOpenInSafariForURL:(id)arg0 ;
-(id)init;


@end


#endif