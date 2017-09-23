//
//  FSViewController.h
//  FlipSnapLibrary
//
//  Created by Rob Newport on 7/25/17.
//  Copyright © 2017 Whisteo. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface FSCamViewController : UIViewController

// User Interface Objects
@property(nonatomic, strong) IBOutlet UISlider *toleranceSlider;
@property(nonatomic, strong) IBOutlet UIView *swatch;

// User Interface Actions
-(IBAction)toggleRecording:(id)sender;
-(IBAction)sliderTolerance:(id)sender;
-(IBAction)depthOn:(UISwitch *)depthSwitch;
-(IBAction)resetColors:(id)sender;
-(IBAction)switchCamera:(id)sender;
-(IBAction)flipMask:(id)sender;

// Status and Descriptions
@property(assign) BOOL recording;
@property(nonatomic, readonly, getter=framerate) float framerate;

// Algorithm Management
-(void)loadAlgorithm:(NSString *)algorithmString;
-(NSString *)algorithmDescription;
-(NSString *)algorithmName;
-(NSString *)algorithmExpiration;
-(void)setBlendmode:(float)mode;
-(void)setSaturation:(float)amount;

// Video Management
-(void)extractVideoURL:(NSURL *)url;
-(void)extractPictureURL:(NSURL *)url;
-(void)clearTempDirectory;
-(void)recordingStoppedForMovieAtURL:(NSURL *)url;

@end
