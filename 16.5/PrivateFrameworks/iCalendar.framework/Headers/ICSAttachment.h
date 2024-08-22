// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSATTACHMENT_H
#define ICSATTACHMENT_H

@class NSString;


#import "ICSProperty.h"

@interface ICSAttachment : ICSProperty

@property (retain, nonatomic) NSString *fmtype;
@property (retain, nonatomic) NSString *managed_filename;
@property (retain, nonatomic) NSString *managed_id;
@property (nonatomic) int size;
@property (nonatomic) BOOL x_apple_autoarchived;
@property (retain, nonatomic) NSString *x_apple_ews_attachmentid;
@property (retain, nonatomic) NSString *x_apple_filename;


-(BOOL)hasSize;
-(BOOL)isBinary;
-(BOOL)shouldObscureValue;
-(id)filename;
-(id)initWithData:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)setData:(id)arg0 ;
-(void)setURL:(id)arg0 ;


@end


#endif