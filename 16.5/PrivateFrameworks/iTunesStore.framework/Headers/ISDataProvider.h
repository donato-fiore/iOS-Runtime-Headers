// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISDATAPROVIDER_H
#define ISDATAPROVIDER_H

@class NSNumber, SSAuthenticationContext, SSURLBagContext, SSBiometricAuthenticationContext, NSString, NSURL, NSURLResponse;
@protocol NSCopying, ISBiometricSessionDelegate;

#import <Foundation/Foundation.h>

#import "ISOperation.h"

@interface ISDataProvider : NSObject <NSCopying>



@property NSUInteger authenticatedAccountCredentialSource; // ivar: _authenticatedAccountCredentialSource
@property (retain) NSNumber *authenticatedAccountDSID; // ivar: _authenticatedAccountDSID
@property (retain) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (retain) SSURLBagContext *bagContext; // ivar: _bagContext
@property (retain) SSBiometricAuthenticationContext *biometricAuthenticationContext; // ivar: _biometricAuthenticationContext
@property NSObject<ISBiometricSessionDelegate> *biometricSessionDelegate; // ivar: _biometricSessionDelegate
@property NSInteger contentLength; // ivar: _contentLength
@property (retain) NSString *contentType; // ivar: _contentType
@property NSInteger errorHandlerResponseType; // ivar: _errorHandlerResponseType
@property (retain) id *output; // ivar: _output
@property (weak) ISOperation *parentOperation; // ivar: _parentOperation
@property (retain) NSURL *redirectURL; // ivar: _redirectURL
@property (retain) NSURLResponse *response; // ivar: _response


+(id)provider;
-(BOOL)_runServerAuthenticationOperation:(id)arg0 error:(*id)arg1 ;
-(BOOL)canStreamContentLength:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)isStream;
-(BOOL)isStreamComplete;
-(BOOL)parseData:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)runAuthorizationDialog:(id)arg0 error:(*id)arg1 ;
-(BOOL)runSubOperation:(id)arg0 error:(*id)arg1 ;
-(BOOL)runTouchIDAuthorizationDialog:(id)arg0 fallbackDialog:(id)arg1 error:(*id)arg2 ;
-(BOOL)runTouchIDAuthorizationDialog:(id)arg0 fallbackDialog:(id)arg1 metricsDictionary:(id)arg2 error:(*id)arg3 ;
-(NSInteger)streamedBytes;
-(id)closeStream;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_performActionsForButton:(id)arg0 withDialog:(id)arg1 ;
-(void)configureFromProvider:(id)arg0 ;
-(void)migrateOutputFromSubProvider:(id)arg0 ;
-(void)resetStream;
-(void)setup;
-(void)streamCancelled;
-(void)streamDidFailWithError:(id)arg0 ;


@end


#endif