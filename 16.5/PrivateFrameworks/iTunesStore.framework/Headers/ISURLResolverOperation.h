// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISURLRESOLVEROPERATION_H
#define ISURLRESOLVEROPERATION_H

@class NSURL, NSArray;


#import "ISOperation.h"

@interface ISURLResolverOperation : ISOperation {
    *__CFHost _host;
    NSURL *_url;
}


@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly) NSArray *resolvedAddressStrings;
@property (readonly) NSArray *resolvedAddresses;


-(id)initWithURL:(id)arg0 ;
-(id)url;
-(void)_resolutionCompletedWithError:(id)arg0 ;
-(void)_runLookupForHostname:(id)arg0 ;
-(void)dealloc;
-(void)run;
-(void)setUrl:(id)arg0 ;


@end


#endif