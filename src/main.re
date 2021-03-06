
let main () => {
  /*Random.init seed;*/

  let options = Show.Options.{
    canvas_size: (1000.0, 1000.0),
    min_margin: 50.0,
    size_hint: 40,
    draw_edges: None,
    /*draw_edges: Some (1.0, "#aaa"),*/
    /*draw_walls: None,*/
    /*draw_shapes: None,*/
    draw_shapes: Some (fun current max => Presenter.hslf 0.0 100.0 (current *. 100.0)),
    draw_walls: Some (1.0, "#ccc"),
  };

  let module Board = HexBox;
  let module Gen = Random2;

  let module Paint' = Paint.F Board Gen;
  let module Show' = Show.F Board Gen;

  /*let (canvas, ctx, state) = Show'.init options;*/

  Paint'.paint options;
   /*ctx state;*/
};

let rand () => {
  let canvas = Canvas.createOnBody 1000 1000;
  let ctx = Canvas.getContext canvas;

  RandomMaze.run ctx (1000.0, 1000.0);
};

/*main();*/
/*rand ();*/
Builder.run();