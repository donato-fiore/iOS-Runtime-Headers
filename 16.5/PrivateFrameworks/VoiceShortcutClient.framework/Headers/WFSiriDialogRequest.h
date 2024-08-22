// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIDIALOGREQUEST_H
#define WFSIRIDIALOGREQUEST_H



#import "WFSiriActionRequest.h"
#import "WFDialogRequest.h"

@interface WFSiriDialogRequest : WFSiriActionRequest

@property (readonly, nonatomic) WFDialogRequest *dialogRequest; // ivar: _dialogRequest


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDialogRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif