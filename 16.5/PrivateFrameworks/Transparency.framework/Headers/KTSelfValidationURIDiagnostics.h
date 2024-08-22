// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTSELFVALIDATIONURIDIAGNOSTICS_H
#define KTSELFVALIDATIONURIDIAGNOSTICS_H

@class NSDictionary, NSError, NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTSelfValidationURIDiagnostics : NSObject <NSSecureCoding>



@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSError *error; // ivar: _error
@property (retain) NSDictionary *ktVerificationInfoDiagnosticsJson; // ivar: _ktVerificationInfoDiagnosticsJson
@property (retain) NSDate *requestTime; // ivar: _requestTime
@property (retain) NSString *result; // ivar: _result
@property (retain) NSDictionary *transparentDataDiagnosticsJson; // ivar: _transparentDataDiagnosticsJson


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif