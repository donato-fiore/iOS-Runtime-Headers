// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVDIRECTUPLOAD_H
#define SSVDIRECTUPLOAD_H

@class NSString, NSError, NSURL;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSVDirectUpload : NSObject <SSXPCCoding>



@property (copy, nonatomic) NSString *UTI; // ivar: _uti
@property (copy, nonatomic, setter=_setUploadKind:) NSString *_uploadKind; // ivar: _uploadKind
@property (copy, nonatomic) NSString *categoryName; // ivar: _categoryName
@property (nonatomic) NSInteger countOfBytesExpectedToSend; // ivar: _countOfBytesExpectedToSend
@property (nonatomic) NSInteger countOfBytesSent; // ivar: _countOfBytesSent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent; // ivar: _explicitContent
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger persistentIdentifier; // ivar: _persistentIdentifier
@property (nonatomic) NSInteger state; // ivar: _state
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *thumbnailImageURL; // ivar: _thumbnailImageURL
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_adoptStatusFromUpload:(id)arg0 ;


@end


#endif