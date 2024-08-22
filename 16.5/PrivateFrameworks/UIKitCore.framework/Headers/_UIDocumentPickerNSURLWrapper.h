// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDOCUMENTPICKERNSURLWRAPPER_H
#define _UIDOCUMENTPICKERNSURLWRAPPER_H

@class NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding>



@property (retain) NSData *promiseScope; // ivar: _promiseScope
@property (retain) NSURL *promiseURL; // ivar: _promiseURL
@property (retain) NSData *scope; // ivar: _scope
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)wrapperForExportWithURL:(id)arg0 error:(*id)arg1 ;
+(id)wrapperWithURL:(id)arg0 ;
+(id)wrapperWithURL:(id)arg0 createSandboxIfNoneAttached:(BOOL)arg1 ;
+(id)wrapperWithURL:(id)arg0 readonly:(BOOL)arg1 ;
+(void)assembleURL:(id)arg0 sandbox:(id)arg1 physicalURL:(id)arg2 physicalSandbox:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif