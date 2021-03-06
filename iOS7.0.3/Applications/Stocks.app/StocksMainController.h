/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/StocksController.h>

@class StocksMainView, UIViewController, StocksBackSideNavigationController;

@interface StocksMainController : StocksController {

	StocksMainView* _stocksView;
	BOOL _showingBackside;
	BOOL _updateStocksOnFlipToFront;
	BOOL _updateChartOnFlipToFront;
	UIViewController* _frontSideViewController;
	StocksBackSideNavigationController* _backSideNavigationController;

}
+(id)sharedStocksController;
-(void)_handleStatusBarHeightChange:(id)arg1 ;
-(void)prepareForApplicationScreenshot;
-(id)stocksView;
-(void)setShowingBackside:(BOOL)arg1 ;
-(void)_stockWasAdded:(id)arg1 ;
-(id)chartView;
-(id)newsView;
-(void)updateChartData;
-(void)updateStockData;
-(void)setSelectedStock:(id)arg1 writeToDefaults:(BOOL)arg2 ;
-(void)attemptRotationToCurrentDeviceOrientation;
-(void)switchToBackIfNeeded;
-(void)switchToBack;
-(void)setShowingBackside:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showingBackside;
-(void)backSideDone;
-(id)backsideNavigationController;
-(id)backsideView;
-(void)didBecomeActive;
-(id)listView;
-(BOOL)isRotating;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)run;
-(void)resume;
-(BOOL)isLoading;
-(void)willResignActive;
-(void).cxx_destruct;
@end

