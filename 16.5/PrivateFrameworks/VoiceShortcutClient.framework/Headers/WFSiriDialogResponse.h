// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIDIALOGRESPONSE_H
#define WFSIRIDIALOGRESPONSE_H



#import "WFSiriActionResponse.h"
#import "WFDialogResponse.h"

@interface WFSiriDialogResponse : WFSiriActionResponse

@property (readonly, nonatomic) WFDialogResponse *dialogResponse; // ivar: _dialogResponse


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDialogResponse:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif