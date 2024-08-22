// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCXPCCLIENT_H
#define TCXPCCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface TCXPCClient : NSObject {
    NSXPCConnection *_connection;
    BOOL _valid;
}




-(BOOL)isValid;
-(id)_textCheckingResultsFromData:(id)arg0 ;
-(id)connection;
-(id)init;
-(void)_dataFromCheckingString:(id)arg0 language:(id)arg1 offset:(NSUInteger)arg2 optionsData:(id)arg3 completionHandler:(id)arg4 ;
-(void)recordResponse:(NSUInteger)arg0 toGrammarDetail:(id)arg1 language:(id)arg2 appIdentifier:(id)arg3 ;
-(void)requestCheckingOfString:(id)arg0 language:(id)arg1 offset:(NSUInteger)arg2 options:(id)arg3 completionHandler:(id)arg4 ;
-(void)setValid:(BOOL)arg0 ;


@end


#endif