/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoAttributes, HMDReselectedRTPParameters;

@interface HMDReselectedVideoParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDVideoAttributes* _videoAttributes;
	HMDReselectedRTPParameters* _rtpParameters;

}

@property (nonatomic,copy,readonly) HMDVideoAttributes * videoAttributes;                    //@synthesize videoAttributes=_videoAttributes - In the implementation block
@property (nonatomic,copy,readonly) HMDReselectedRTPParameters * rtpParameters;              //@synthesize rtpParameters=_rtpParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(HMDVideoAttributes *)videoAttributes;
-(HMDReselectedRTPParameters *)rtpParameters;
-(id)initWithAttribute:(id)arg1 rtpParameter:(id)arg2 ;
@end
