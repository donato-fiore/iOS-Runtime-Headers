// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKSNIPPETDIALOGRESPONSE_H
#define WFLINKSNIPPETDIALOGRESPONSE_H

@class WFDialogResponse, NSURL;



@interface WFLinkSnippetDialogResponse : WFDialogResponse

@property (copy, nonatomic) NSURL *requestedOpenURL; // ivar: _requestedOpenURL
@property (readonly, nonatomic) NSUInteger snippetResponseCode; // ivar: _snippetResponseCode


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCancelled:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestedOpenURL:(id)arg0 ;
-(id)initWithResponseCode:(NSInteger)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif